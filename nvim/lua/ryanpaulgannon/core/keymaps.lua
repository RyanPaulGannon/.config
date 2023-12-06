local keymap = vim.keymap

vim.g.mapleader = " "

keymap.set('n', '<leader>pv', vim.cmd.Ex)
keymap.set('n', '<C-w>', ':w<CR>')

-- Yank to system clipboard

keymap.set("n", "<leader>y", "\"+y")

