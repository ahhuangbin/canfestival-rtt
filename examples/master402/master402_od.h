
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef MASTER402_H
#define MASTER402_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 master402_valueRangeTest (UNS8 typeValue, void * value);
const indextable * master402_scanIndexOD (CO_Data *d, UNS16 wIndex, UNS32 * errorCode);

/* Master node data struct */
extern CO_Data master402_Data;
extern UNS16 control_word_6040;		/* Mapped at index 0x2000, subindex 0x00*/
extern INTEGER8 modes_of_operation_6060;		/* Mapped at index 0x2001, subindex 0x00*/
extern INTEGER32 target_position_607a;		/* Mapped at index 0x2002, subindex 0x00*/
extern UNS32 profile_velocity_6081;		/* Mapped at index 0x2003, subindex 0x00*/
extern UNS16 status_word_6041;		/* Mapped at index 0x2004, subindex 0x00*/
extern INTEGER32 position_actual_value_6063;		/* Mapped at index 0x2005, subindex 0x00*/
extern INTEGER32 velocity_actual_value_606c;		/* Mapped at index 0x2006, subindex 0x00*/

#endif // MASTER402_H
