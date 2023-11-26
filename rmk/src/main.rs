use std::fs;

use serde::Deserialize;

#[derive(Deserialize, Debug)]
struct KeyboardData {
    version: u8,
    notes: String,
    documentation: String,
    keymap: String,
    layout: String,
    layers: Vec<Vec<String>>,
}

fn main() {
    println!("Welcome, to RMK!");

    if let Err(err) = get_keyboard() {
        println!("{:?}", err);
    }
}

fn get_keyboard() -> Result<(), Box<dyn std::error::Error>> {
    let keyboard = fs::read_to_string("./rpg_crkbd_v1.json")?;
    let keys: KeyboardData = serde_json::from_str(&keyboard)?;

    for key in keys.layers {
        println!("{:#?}", key);
    }

    Ok(())
}
