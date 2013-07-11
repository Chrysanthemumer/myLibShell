/*

*/

#include "DynamicInit/DynamicInit.h"
#include "DynamicInit/Indexing_StateVar.h"

/**************************/
/* Index Control Variable */
/**************************/
// New code needed for each new Exciter model 
static PetscInt *EFD_address;
// New code needed for each new Governor model
static PetscInt * PM_address;

static PetscErrorCode Indexing_generator (GEN_MODELS * pGEN,PetscInt type,PetscInt idx,PetscInt *start);
static PetscErrorCode Indexing_exciter (EXC_MODELS * pEXC,PetscInt type,PetscInt idx,PetscInt *start);
static PetscErrorCode Indexing_governor (GOV_MODELS * pGOV,PetscInt type,PetscInt idx,PetscInt *start);
static PetscErrorCode Indexing_stabilizer (STAB_MODELS * pSTAB,PetscInt type,PetscInt idx,PetscInt *start);

#undef __FUNCT__
#define __FUNCT__ "Indexing_StateVar"
/*****************************************************************************/
/*   Function: Indexing_StateVar                                             */
/*Description: Generate state variable index, with respect to the sequence   */
/*             of generator under structure MAC_INFO_data.                   */
/*     return:                                                               */
/*****************************************************************************/
PetscErrorCode Indexing_StateVar (MAC_INFO_data *pMAC, GENDATA *pdata){
  
  PetscErrorCode ierr;
  PetscInt i;
  PetscInt loop;
  PetscInt INDEX;
  
  PetscFunctionBegin;
  /* 1. Max iteration & Overall INDEX */
  loop = pMAC->gen_num;
  INDEX = 0;
  
  /* 2. Main iteration */
  for(i=0;i<loop;i++){
    /* 2.1 Generator */
    if(pMAC->gen_model[i] == 0){
      printf("Error: generator model type is 0.\n");
    }else{
      ierr = Indexing_generator (pdata->GEN_MODEL,pMAC->gen_model[i],pMAC->gen_idx[i]-1,&INDEX);CHKERRQ(ierr);
    }
    ierr = Indexing_exciter (pdata->EXC_MODEL,pMAC->exc_model[i], pMAC->exc_idx[i]-1,&INDEX);CHKERRQ(ierr);
    ierr = Indexing_governor(pdata->GOV_MODEL,pMAC->tgov_model[i],pMAC->tgov_idx[i]-1,&INDEX);CHKERRQ(ierr);
    ierr = Indexing_stabilizer (pdata->STAB_MODEL,pMAC->stab_model[i],pMAC->stab_idx[i]-1,&INDEX);CHKERRQ(ierr);
  }
  
  PetscFunctionReturn(0);
}


#undef __FUNCT__
#define __FUNCT__ "Indexing_generator"
/*****************************************************************************/
/*   Function: Indexing_generator                                            */
/*Description: Intermediate handovers: Chooses generator type, finds memory  */
/*             location and calls generator handler.                         */
/*     return:                                                               */
/*****************************************************************************/
static PetscErrorCode Indexing_generator (GEN_MODELS * pGEN,
                                          PetscInt type,
                                          PetscInt idx,
                                          PetscInt *start){

  PetscErrorCode ierr;
  
  PetscFunctionBegin;

  switch(type)
  {
    case 0:
      printf("Error: generator model type is 0.\n");
      break;

    case 19:/* GENROU */
      ierr = Indexing_GENROU (pGEN->GENROU, idx, start);CHKERRQ(ierr);
      *start+=1;
      EFD_address = &(pGEN->GENROU->EFD_idx[idx]);
      PM_address  = &(pGEN->GENROU->PM_idx[idx]);
      break;
  	
    default:
      printf("Info: Generator type associated with generator unidentified.\n");
  }

  
  PetscFunctionReturn(0);
}


#undef __FUNCT__
#define __FUNCT__ "Indexing_exciter"
/*****************************************************************************/
/*   Function: Indexing_exciter                                              */
/*Description: Intermediate handovers: Chooses exciter type, finds memory    */
/*             location and calls exciter handler.                           */
/*     return:                                                               */
/*****************************************************************************/
static PetscErrorCode Indexing_exciter (EXC_MODELS * pEXC,
                                        PetscInt type,
                                        PetscInt idx,
                                        PetscInt *start){
  
  PetscErrorCode ierr;
  

  
  PetscFunctionBegin;
  
  switch(type)
  {
    case 0:
      printf("Info: exciter no exist for this Generator.\n");
      *EFD_address = -1;
      break;
    
    case 9: /* ESAC1A */
      ierr = Indexing_ESAC1A (pEXC->ESAC1A, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->ESAC1A->EFD_idx[idx];
      break;
   
    case 10: /* ESAC2A */
      ierr = Indexing_ESAC2A (pEXC->ESAC2A, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->ESAC2A->EFD_idx[idx];
      break;
  
    case 11: /* ESAC3A */
      ierr = Indexing_ESAC3A (pEXC->ESAC3A, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->ESAC3A->EFD_idx[idx];
      break;

    case 13: /* ESAC5A */
      ierr = Indexing_ESAC5A (pEXC->ESAC5A, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->ESAC5A->EFD_idx[idx];
      break;

    case 14: /* ESAC6A */
      ierr = Indexing_ESAC6A (pEXC->ESAC6A, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->ESAC6A->EFD_idx[idx];
      break;

    case 15: /* ESAC8B */
      ierr = Indexing_ESAC8B (pEXC->ESAC8B, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->ESAC8B->EFD_idx[idx];
      break;
  
    case 16: /* ESDC1A */
      ierr = Indexing_ESDC1A (pEXC->ESDC1A, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->ESDC1A->EFD_idx[idx];
      break;
  
    case 17: /* ESDC2A */
      ierr = Indexing_ESDC2A (pEXC->ESDC2A, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->ESDC2A->EFD_idx[idx];
      break;

    case 24: /* EXAC1 */
      ierr = Indexing_EXAC1 (pEXC->EXAC1, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->EXAC1->EFD_idx[idx];
      break;
      
  	case 26: /* EXAC2 */
      ierr = Indexing_EXAC2 (pEXC->EXAC2, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->EXAC2->EFD_idx[idx];
      break;
  	
 		case 35: /* EXST1 */
      ierr = Indexing_EXST1 (pEXC->EXST1, idx, start);CHKERRQ(ierr);
      *start+=1;
      *EFD_address = pEXC->EXST1->EFD_idx[idx];
      break;
      
    default:
      printf("Info: Exciter type associated with generator unidentified.\n");
  }

  
  PetscFunctionReturn(0);
}


#undef __FUNCT__
#define __FUNCT__ "Indexing_governor"
/*****************************************************************************/
/*   Function: Indexing_governor                                             */
/*Description: Intermediate handovers: Chooses governor type, finds memory   */
/*             location and calls governor handler.                          */
/*     return:                                                               */
/*****************************************************************************/
static PetscErrorCode Indexing_governor (GOV_MODELS * pGOV,
                                         PetscInt type,
                                         PetscInt idx,
                                         PetscInt *start){
  
  PetscErrorCode ierr;
  PetscFunctionBegin;
  
  switch(type)
  {  
    case 0:
      printf("Info: governor no exist for this Generator.\n");
      *PM_address = -1;
      break;
    case 17:
      ierr = Indexing_IEESGO (pGOV->IEESGO, idx, start);CHKERRQ(ierr);
      *start+=1;
      *PM_address = pGOV->IEESGO->PM_idx[idx];
      break;
  	
    default:
      printf("Info: Governor type associated with generator unidentified.\n");
  }

  
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "Indexing_stabilizer"
/*****************************************************************************/
/*   Function: Indexing_stabilizer                                           */
/*Description: Intermediate handovers: Chooses stabilizer type, finds memory */
/*             location and calls stabilizer handler.                        */
/*     return:                                                               */
/*****************************************************************************/
static PetscErrorCode Indexing_stabilizer (STAB_MODELS * pSTAB,
                                           PetscInt type,
                                           PetscInt idx,
                                           PetscInt *start){
  
  PetscErrorCode ierr=0;
  
  PetscFunctionBegin;
  
  switch(type)
  {
    case 0:
      printf("Error: stabilizer model type is 0.\n");
      break;
    case 1:
      break;
    case 2:
      break;
    default:
      printf("Info: Stabilizer type associated with generator unidentified.\n");
  }
  
  PetscFunctionReturn(ierr);
}


