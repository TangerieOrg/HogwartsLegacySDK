#include "UFieldNodeFloat.hpp"
#include "UFieldNodeInt.hpp"
#include "UFunction.hpp"
#include "UToFloatField.hpp"
UToFloatField* UToFloatField::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.ToFloatField");
    return (UToFloatField*)res;
}
UToFloatField* UToFloatField::SetToFloatField(UFieldNodeInt* IntegerField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField"));
    struct Params_SetToFloatField {
        UFieldNodeInt* IntegerField; // 0x0
        UToFloatField* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetToFloatField params{};
    params.IntegerField = (UFieldNodeInt*)IntegerField;
    ProcessEvent(func, &params);
    return (UToFloatField*)params.ReturnValue;
}
