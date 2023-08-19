#include "EFieldOperationType.hpp"
#include "UFieldNodeBase.hpp"
#include "UFunction.hpp"
#include "UOperatorField.hpp"
UOperatorField* UOperatorField::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.OperatorField");
    return (UOperatorField*)res;
}
UOperatorField* UOperatorField::SetOperatorField(float Magnitude, UFieldNodeBase* LeftField, UFieldNodeBase* RightField, EFieldOperationType Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.OperatorField.SetOperatorField"));
    struct Params_SetOperatorField {
        float Magnitude; // 0x0
        char pad_4[0x4];
        UFieldNodeBase* LeftField; // 0x8
        UFieldNodeBase* RightField; // 0x10
        EFieldOperationType Operation; // 0x18
        char pad_19[0x7];
        UOperatorField* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_SetOperatorField params{};
    params.Magnitude = (float)Magnitude;
    params.LeftField = (UFieldNodeBase*)LeftField;
    params.RightField = (UFieldNodeBase*)RightField;
    params.Operation = (EFieldOperationType)Operation;
    ProcessEvent(func, &params);
    return (UOperatorField*)params.ReturnValue;
}
