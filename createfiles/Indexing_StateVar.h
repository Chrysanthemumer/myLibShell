#ifndef INDEXING_STATE_VAR_H
#define INDEXING_STATE_VAR_H

#include "petscksp.h"
#include "petscmat.h" 


#ifndef EXC_INCLUDED
#include "exc.h"
#define EXC_INCLUDED
#endif

#ifndef GOV_INCLUDED
#include "gov.h"
#define GOV_INCLUDED
#endif

#ifndef STAB_INCLUDED
#include "stab.h"
#define STAB_INCLUDED
#endif

#ifndef GEN_INCLUDED
#include "gen.h"
#define GEN_INCLUDED
#endif

/* Generator Functions */
PetscErrorCode Indexing_GENROU (GENROU_MODEL *item, PetscInt index, PetscInt *start);
/* Exciter Functions */
PetscErrorCode Indexing_ESDC1A (ESDC1A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESDC2A (ESDC2A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC1A (ESAC1A_MODEL *item, PetscInt index, PetscInt *start);
/* Governor Functions */
PetscErrorCode Indexing_IEESGO (IEESGO_MODEL *item, PetscInt index, PetscInt *start);	
/* Stabilizer Functions */
PetscErrorCode Indexing_LCFB1 (LCFB1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_GENCLS (GENCLS_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_IEESGO (IEESGO_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESDC1A (ESDC1A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC1A (ESAC1A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_WT3G1 (WT3G1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_IEEEG1 (IEEEG1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC8B (ESAC8B_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_GENROU (GENROU_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_EXAC1 (EXAC1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_PSS2A (PSS2A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_EXST3 (EXST3_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC5A (ESAC5A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_EXAC2 (EXAC2_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_CELIN (CELIN_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_WT3T1 (WT3T1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_GGOV1 (GGOV1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_IEEEST (IEEEST_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESST1A (ESST1A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_MAXEX1 (MAXEX1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_WT3P1 (WT3P1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_WT3E1 (WT3E1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC2A (ESAC2A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESDC2A (ESDC2A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC6A (ESAC6A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_EXST1 (EXST1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESST4B (ESST4B_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC3A (ESAC3A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_AC7B (AC7B_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_IEEEVC (IEEEVC_MODEL *item, PetscInt index, PetscInt *start);

/* backup prototypes */
/*
PetscErrorCode Indexing_IEEEVC (IEEEVC_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_AC7B (AC7B_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC3A (ESAC3A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESST4B (ESST4B_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_EXST1 (EXST1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC6A (ESAC6A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESDC2A (ESDC2A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC2A (ESAC2A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_WT3E1 (WT3E1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_WT3P1 (WT3P1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_MAXEX1 (MAXEX1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESST1A (ESST1A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_IEEEST (IEEEST_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_GGOV1 (GGOV1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_WT3T1 (WT3T1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_CELIN (CELIN_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_EXAC2 (EXAC2_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC5A (ESAC5A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_EXST3 (EXST3_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_PSS2A (PSS2A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_EXAC1 (EXAC1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_GENROU (GENROU_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC8B (ESAC8B_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_IEEEG1 (IEEEG1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_WT3G1 (WT3G1_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESAC1A (ESAC1A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_ESDC1A (ESDC1A_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_IEESGO (IEESGO_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_GENCLS (GENCLS_MODEL *item, PetscInt index, PetscInt *start);
PetscErrorCode Indexing_LCFB1 (LCFB1_MODEL *item, PetscInt index, PetscInt *start);
*/

#endif

