local lsp = require("lsp-zero")

lsp.preset("recommended")

lsp.ensure_installed({
    'tsserver',
    'eslint',
    'rust_analyzer'
})

local cmp = require('cmp')

local cmp_select = {behavior = cmp.SelectBehavior.Select}
local cmp_mappings = lsp.defaults.cmp_mappings({
  ['<S-p>'] = cmp.mapping.select_prev_item(cmp_select),
  ['<S-n>'] = cmp.mapping.select_next_item(cmp_select),
  ['<S-y>'] = cmp.mapping.confirm({ select = true }),
  ['<S-Space>'] = cmp.mapping.complete()
})

lsp.setup()
