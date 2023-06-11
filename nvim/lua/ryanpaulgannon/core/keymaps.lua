local keymap = vim.keymap

vim.g.mapleader = " "

keymap.set("n", "<leader>pv", vim.cmd.Ex) 

-- Tree Toggle
keymap.set("n", "<leader>e", ":Neotree toggle<CR>")

-- Yank to system clipboard
keymap.set("n", "<leader>y", "\"+y")

-- Which Key
keymap.set('n', '<leader>', "<cmd>WhichKey '<Space>'<CR>", { silent = true })

-- Tabnin
keymap.set('n', '<C-tab', ':tabnine accept_keymap<CR>')

-- Git
vim.keymap.set("n", "<leader>gs", vim.cmd.Git)

-- Undotree
vim.keymap.set("n", "<leader>u", vim.cmd.UndotreeToggle)

