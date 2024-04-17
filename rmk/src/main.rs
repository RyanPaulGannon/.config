#![no_std]
#![no_main]

use cortex_m_rt::entry;
use panic_halt as _;
use rp_pico as bsp;
use rtt_target::{rprintln, rtt_init_print};

use embedded_hal::digital::OutputPin;

use bsp::hal::{
    clocks::{init_clocks_and_plls, Clock},
    pac,
    sio::Sio,
    watchdog::Watchdog,
};

#[entry]
fn main() -> ! {
    rtt_init_print!();
    let mut pac = pac::Peripherals::take().unwrap();
    let core = pac::CorePeripherals::take().unwrap();
    let mut watchdog = Watchdog::new(pac.WATCHDOG);
    let sio = Sio::new(pac.SIO);

    let external_xtal_freq_hz = 12_000_000u32;
    let clocks = init_clocks_and_plls(
        external_xtal_freq_hz,
        pac.XOSC,
        pac.CLOCKS,
        pac.PLL_SYS,
        pac.PLL_USB,
        &mut pac.RESETS,
        &mut watchdog,
    )
    .ok()
    .unwrap();

    let mut delay = cortex_m::delay::Delay::new(core.SYST, clocks.system_clock.freq().to_Hz());

    let pins = bsp::Pins::new(
        pac.IO_BANK0,
        pac.PADS_BANK0,
        sio.gpio_bank0,
        &mut pac.RESETS,
    );

    let mut pin_16 = pins.gpio16.into_push_pull_output();

    loop {
        rprintln!("Turning on");
        pin_16.set_high().unwrap();
        delay.delay_ms(500);
        rprintln!("Turning off");
        pin_16.set_low().unwrap();
        delay.delay_ms(500);
    }
}
