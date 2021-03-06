#ifndef _ILDA_VB_H_
#define _ILDA_VB_H_

#include "ilda_main.h"

/* train */
prob ilda_vb_train(ilda *_m);
void ilda_vb_init(ilda *_m);

/* steps */
void ilda_vb_estep(ilda *_m);
void ilda_vb_mstep(ilda *_m);
void ilda_vb_fpi(ilda *_m);

/* updates */
void ilda_vb_update_alp(ilda *_m);
void ilda_vb_update_btp(ilda *_m);
void ilda_vb_update_thp(ilda *_m);
void ilda_vb_update_php(ilda *_m);
void ilda_vb_update_gmp(ilda *_m);
void ilda_vb_update_al(ilda *_m);
void ilda_vb_update_bt(ilda *_m);

/* vfe & ll */
prob ilda_vb_vfe(ilda *_m);
prob ilda_vb_log_likelihood(ilda *_m);

#endif
