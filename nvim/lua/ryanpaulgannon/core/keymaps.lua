local keymap = vim.keymap

vim.g.mapleader = " "

keymap.set("n", "<leader>pv", vim.cmd.Ex) 

-- Windows
keymap.set("n", "<C-n>", ":tabnew<CR>")
keymap.set("n", "<C-t>", ":tabn<CR>")
keymap.set("n", "<C-b>", ":tabp<CR>")
keymap.set("n", "<C-c>", ":tabclose<CR>")

-- Tree Toggle
keymap.set("n", "<leader>e", ":NvimTreeToggle<CR>")

-- Yank to system clipboard
keymap.set("n", "<leader>y", "\"+y")

-- Which Key
keymap.set('n', '<leader>', "<cmd>WhichKey '<Space>'<CR>", { silent = true })
