#include "EEnemy_Ability.hpp"
#include "FAlphaBlend.hpp"
#include "UAblChannelingBase.hpp"
#include "UAblNPCDynamicBranchChannelingConditional.hpp"
UAblNPCDynamicBranchChannelingConditional* UAblNPCDynamicBranchChannelingConditional::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPCDynamicBranchChannelingConditional");
    return (UAblNPCDynamicBranchChannelingConditional*)res;
}
