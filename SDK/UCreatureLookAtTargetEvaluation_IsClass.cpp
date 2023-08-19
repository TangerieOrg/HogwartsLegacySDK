#include "UClass.hpp"
#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#include "UCreatureLookAtTargetEvaluation_IsClass.hpp"
UCreatureLookAtTargetEvaluation_IsClass* UCreatureLookAtTargetEvaluation_IsClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_IsClass");
    return (UCreatureLookAtTargetEvaluation_IsClass*)res;
}
