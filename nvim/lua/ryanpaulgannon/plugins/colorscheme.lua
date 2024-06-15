return {
	"rose-pine/neovim",
	-- "catppuccin/nvim",
	-- "folke/tokyonight.nvim",
	lazy = false, -- make sure we load this during startup if it is your main colorscheme
	priority = 1000, -- make sure to load this before all the other start plugins
	config = function()
		require("rose-pine").setup({
			disable_background = "true",
			styles = {
				italic = false,
			},
			-- require("catppuccin").setup({
			-- 	flavour = "mocha",
			-- 	transparent_background = "true",
			-- require("tokyonight").setup({
			-- 	transparent = true,
		})
		-- load the colorscheme here
		vim.cmd([[colorscheme rose-pine]])
		-- vim.cmd([[colorscheme catppuccin]])
		-- vim.cmd([[colorscheme tokyonight]])
	end,
}
