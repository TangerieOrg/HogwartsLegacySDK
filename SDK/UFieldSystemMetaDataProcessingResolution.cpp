#include "EFieldResolutionType.hpp"
#include "UFieldSystemMetaData.hpp"
#include "UFieldSystemMetaDataProcessingResolution.hpp"
#include "UFunction.hpp"
UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
    return (UFieldSystemMetaDataProcessingResolution*)res;
}
UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType"));
    struct Params_SetMetaDataaProcessingResolutionType {
        EFieldResolutionType ResolutionType; // 0x0
        char pad_1[0x7];
        UFieldSystemMetaDataProcessingResolution* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetMetaDataaProcessingResolutionType params{};
    params.ResolutionType = (EFieldResolutionType)ResolutionType;
    ProcessEvent(func, &params);
    return (UFieldSystemMetaDataProcessingResolution*)params.ReturnValue;
}
