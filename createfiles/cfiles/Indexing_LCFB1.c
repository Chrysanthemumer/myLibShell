#include "DynamicInit/Indexing_StateVar.h"

#undef __FUNCT__
#define __FUNCT__ "Indexing_LCFB1"
/*****************************************************************************/
/*   Function: Indexing_LCFB1                                               */
/*Description: Fill in index value in one LCFB1 model, refered by           */
/*             LCFB1_MODEL                                                  */
/*     return:                                                               */
/*****************************************************************************/
PetscErrorCode Indexing_LCFB1 (LCFB1_MODEL *item, PetscInt index, PetscInt *start){
  
  PetscErrorCode ierr=0;
  
  PetscInt current_index;
  
  PetscFunctionBegin;
  
  /* Description:                                                            */
  /* 1. The starting value of index can be de-referenced from *start.        */
  /* 2. Remember to store the index value back to *start, example:           */
  /*    (1)We know GENROU has 6 vector,and the *start value de-referenced    */
  /*       is 23.(current_index)                                             */
  /*    (2)After all the methodology extracted from deferential equations,   */
  /*       the last variable should be 28. (23, 24, 25, 26, 27, 28)          */
  /*    (3)Store 28 back: '*start=28;'                                       */
  
  /*(1)*/
  current_index = *start;
  /*(2)*/

  /*(3)*/
  *start = current_index;
  
  PetscFunctionReturn(ierr);
}
