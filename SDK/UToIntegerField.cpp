#include "UFieldNodeFloat.hpp"
#include "UFieldNodeInt.hpp"
#include "UFunction.hpp"
#include "UToIntegerField.hpp"
UToIntegerField* UToIntegerField::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.ToIntegerField");
    return (UToIntegerField*)res;
}
UToIntegerField* UToIntegerField::SetToIntegerField(UFieldNodeFloat* FloatField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField"));
    struct Params_SetToIntegerField {
        UFieldNodeFloat* FloatField; // 0x0
        UToIntegerField* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetToIntegerField params{};
    params.FloatField = (UFieldNodeFloat*)FloatField;
    ProcessEvent(func, &params);
    return (UToIntegerField*)params.ReturnValue;
}
