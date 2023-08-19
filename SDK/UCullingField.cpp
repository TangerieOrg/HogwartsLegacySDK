#include "EFieldCullingOperationType.hpp"
#include "UCullingField.hpp"
#include "UFieldNodeBase.hpp"
#include "UFunction.hpp"
UCullingField* UCullingField::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.CullingField");
    return (UCullingField*)res;
}
UCullingField* UCullingField::SetCullingField(UFieldNodeBase* Culling, UFieldNodeBase* Field, EFieldCullingOperationType Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.CullingField.SetCullingField"));
    struct Params_SetCullingField {
        UFieldNodeBase* Culling; // 0x0
        UFieldNodeBase* Field; // 0x8
        EFieldCullingOperationType Operation; // 0x10
        char pad_11[0x7];
        UCullingField* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SetCullingField params{};
    params.Culling = (UFieldNodeBase*)Culling;
    params.Field = (UFieldNodeBase*)Field;
    params.Operation = (EFieldCullingOperationType)Operation;
    ProcessEvent(func, &params);
    return (UCullingField*)params.ReturnValue;
}
