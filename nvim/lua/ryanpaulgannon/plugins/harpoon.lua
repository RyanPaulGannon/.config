return {
	"theprimeagen/harpoon",
	branch = "harpoon2",
	dependencies = { "nvim-lua/plenary.nvim" },
	config = function()
		require("harpoon"):setup()
	end,
	keys = {
		{
			"<leader>a",
			function()
				require("harpoon"):list():append()
			end,
			desc = "Add file to Harpoon",
		},
		{
			"<leader>h",
			function()
				local harpoon = require("harpoon")
				harpoon.ui:toggle_quick_menu(harpoon:list())
			end,
			desc = "Harpoon UI",
		},
		{
			"<leader>1",
			function()
				require("harpoon"):list():select(1)
			end,
			desc = "Harpoon file one",
		},
		{
			"<leader>2",
			function()
				require("harpoon"):list():select(2)
			end,
			desc = "Harpoon file two",
		},
		{
			"<leader>3",
			function()
				require("harpoon"):list():select(3)
			end,
			desc = "Harpoon file three",
		},
		{
			"<leader>4",
			function()
				require("harpoon"):list():select(4)
			end,
			desc = "Harpoon file four",
		},
		{
			"<leader>5",
			function()
				require("harpoon"):list():select(5)
			end,
			desc = "Harpoon file five",
		},
	},
}
