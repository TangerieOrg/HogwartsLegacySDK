#include "EFieldFilterType.hpp"
#include "UFieldSystemMetaData.hpp"
#include "UFieldSystemMetaDataFilter.hpp"
#include "UFunction.hpp"
UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter");
    return (UFieldSystemMetaDataFilter*)res;
}
UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(EFieldFilterType FilterType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType"));
    struct Params_SetMetaDataFilterType {
        EFieldFilterType FilterType; // 0x0
        char pad_1[0x7];
        UFieldSystemMetaDataFilter* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetMetaDataFilterType params{};
    params.FilterType = (EFieldFilterType)FilterType;
    ProcessEvent(func, &params);
    return (UFieldSystemMetaDataFilter*)params.ReturnValue;
}
