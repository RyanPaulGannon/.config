local keymap = vim.keymap

vim.g.mapleader = " "

keymap.set("n", "<leader>pv", vim.cmd.Ex) 

-- Windows
keymap.set("n", "<S-n>", ":tabnew<CR>")
keymap.set("n", "<S-t>", ":tabn<CR>")
keymap.set("n", "<S-b>", ":tabp<CR>")
keymap.set("n", "<S-c>", ":tabclose<CR>")

-- Tree Toggle
keymap.set("n", "<leader>e", ":NvimTreeToggle<CR>")

-- Yank to system clipboard
keymap.set("n", "<leader>y", "\"+y")
