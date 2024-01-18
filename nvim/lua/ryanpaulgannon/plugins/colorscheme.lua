return {
	-- "rose-pine/neovim",
	"catppuccin/nvim",
	lazy = false, -- make sure we load this during startup if it is your main colorscheme
	priority = 1000, -- make sure to load this before all the other start plugins
	config = function()
		require("catppuccin").setup({
			-- disable_background = "true",
			flavour = "mocha",
			transparent_background = "true",
		})
		-- 	--- @usage 'auto'|'main'|'moon'|'dawn'
		-- 	variant = "auto",
		-- 	--- @usage 'main'|'moon'|'dawn'
		-- 	dark_variant = "main",
		-- 	bold_vert_split = false,
		-- 	dim_nc_background = false,
		-- 	disable_background = true,
		-- 	disable_nc_background = true,
		-- 	disable_float_background = true,
		-- 	disable_italics = false,
		--
		-- 	--- @usage string hex value or named color from rosepinetheme.com/palette
		-- 	groups = {
		-- 		background = "base",
		-- 		background_nc = "_experimental_nc",
		-- 		panel = "surface",
		-- 		panel_nc = "base",
		-- 		border = "highlight_med",
		-- 		comment = "muted",
		-- 		link = "iris",
		-- 		punctuation = "subtle",
		--
		-- 		error = "love",
		-- 		hint = "iris",
		-- 		info = "foam",
		-- 		warn = "gold",
		--
		-- 		headings = {
		-- 			h1 = "iris",
		-- 			h2 = "foam",
		-- 			h3 = "rose",
		-- 			h4 = "gold",
		-- 			h5 = "pine",
		-- 			h6 = "foam",
		-- 		},
		-- 		-- or set all headings at once
		-- 		-- headings = 'subtle'
		-- 	},
		--
		-- 	-- Change specific vim highlight groups
		-- 	-- https://github.com/rose-pine/neovim/wiki/Recipes
		-- 	highlight_groups = {
		-- 		ColorColumn = { bg = "rose" },
		--
		-- 		-- Blend colours against the "base" background
		-- 		CursorLine = { bg = "foam", blend = 10 },
		-- 		StatusLine = { fg = "love", bg = "love", blend = 10 },
		--
		-- 		-- By default each group adds to the existing config.
		-- 		-- If you only want to set what is written in this config exactly,
		-- 		-- you can set the inherit option:
		-- 		Search = { bg = "gold", inherit = false },
		-- 	},
		-- })
		-- load the colorscheme here
		-- vim.cmd([[colorscheme rose-pine]])
		vim.cmd.colorscheme("catppuccin")
	end,
}
