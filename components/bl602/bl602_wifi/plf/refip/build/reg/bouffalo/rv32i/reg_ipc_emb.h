
void ipc_app2emb0_sel_setf(uint8_t app2emb0sel);
void ipc_app2emb10_sel_setf(uint8_t app2emb10sel);
void ipc_app2emb11_sel_setf(uint8_t app2emb11sel);
void ipc_app2emb12_sel_setf(uint8_t app2emb12sel);
void ipc_app2emb1_sel_setf(uint8_t app2emb1sel);
void ipc_app2emb4_sel_setf(uint8_t app2emb4sel);
void ipc_app2emb5_sel_setf(uint8_t app2emb5sel);
void ipc_app2emb6_sel_setf(uint8_t app2emb6sel);
void ipc_app2emb8_sel_setf(uint8_t app2emb8sel);
void ipc_app2emb9_sel_setf(uint8_t app2emb9sel);
void ipc_app2emb_ack_clear(uint32_t value);
void ipc_app2emb_line_sel_high_set(uint32_t value);
void ipc_app2emb_line_sel_low_set(uint32_t value);
uint32_t ipc_app2emb_rawstatus_get(void);
uint32_t ipc_app2emb_status_get(void);
void ipc_app2emb_unmask_clear(uint32_t value);
void ipc_app2emb_unmask_set(uint32_t value);
void ipc_emb2app_trigger_set(uint32_t value);
uint32_t ipc_emb_signature_get(void);
