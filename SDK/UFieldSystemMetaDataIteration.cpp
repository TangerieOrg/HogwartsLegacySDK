#include "UFieldSystemMetaData.hpp"
#include "UFieldSystemMetaDataIteration.hpp"
#include "UFunction.hpp"
UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration");
    return (UFieldSystemMetaDataIteration*)res;
}
UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int32_t iterations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration"));
    struct Params_SetMetaDataIteration {
        int32_t iterations; // 0x0
        char pad_4[0x4];
        UFieldSystemMetaDataIteration* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetMetaDataIteration params{};
    params.iterations = (int32_t)iterations;
    ProcessEvent(func, &params);
    return (UFieldSystemMetaDataIteration*)params.ReturnValue;
}
