#include "ULumosPostProcessingAsset.hpp"
#include "ULumosScalabilityModifyPostProcessing.hpp"
#include "ULumosScalabilityModifyWithRule.hpp"
ULumosScalabilityModifyPostProcessing* ULumosScalabilityModifyPostProcessing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityModifyPostProcessing");
    return (ULumosScalabilityModifyPostProcessing*)res;
}
