local mark = require("harpoon.mark")
local ui = require("harpoon.ui")
local keymap = vim.keymap

keymap.set("n", "<leader>a", mark.add_file)
keymap.set("n", "<S-e>", ui.toggle_quick_menu)

keymap.set("n", "<S-h>", function() ui.nav_file(1) end)
keymap.set("n", "<S-t>", function() ui.nav_file(2) end)
keymap.set("n", "<S-n>", function() ui.nav_file(3) end)
keymap.set("n", "<S-s>", function() ui.nav_file(4) end)
