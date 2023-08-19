#include "AActor.hpp"
#include "ALerpVolumesSingleton.hpp"
#include "ELerpVolumesGetTagValueMode.hpp"
#include "ELerpVolumesInterpolantType.hpp"
#include "FLerpVolumesInterpolants.hpp"
#include "FLerpVolumesInterpolantsEvaluator.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULerpVolumeFinalInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "UObject.hpp"
ALerpVolumesSingleton* ALerpVolumesSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumesSingleton");
    return (ALerpVolumesSingleton*)res;
}
void ALerpVolumesSingleton::LerpVolumesSetWorldColorDefault(UObject* WorldContextObject, FName VariableName, FLinearColor VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldColorDefault"));
    struct Params_LerpVolumesSetWorldColorDefault {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FLinearColor VariableValue; // 0x10
    }; // Size: 0x20
    Params_LerpVolumesSetWorldColorDefault params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FLinearColor)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALerpVolumesSingleton::LerpVolumesGetWorldType(UObject* WorldContextObject, FName VariableName, ELerpVolumesInterpolantType& VariableType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldType"));
    struct Params_LerpVolumesGetWorldType {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        ELerpVolumesInterpolantType VariableType; // 0x10
    }; // Size: 0x11
    Params_LerpVolumesGetWorldType params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableType = (ELerpVolumesInterpolantType)VariableType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableType = params.VariableType;
}
void ALerpVolumesSingleton::LerpVolumesSetWorldVectorDefault(UObject* WorldContextObject, FName VariableName, FVector VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldVectorDefault"));
    struct Params_LerpVolumesSetWorldVectorDefault {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FVector VariableValue; // 0x10
    }; // Size: 0x1c
    Params_LerpVolumesSetWorldVectorDefault params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FVector)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALerpVolumesSingleton::LerpVolumesSetWorldTagDefault(UObject* WorldContextObject, FName VariableName, FString VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldTagDefault"));
    struct Params_LerpVolumesSetWorldTagDefault {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FString VariableValue; // 0x10
    }; // Size: 0x20
    Params_LerpVolumesSetWorldTagDefault params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FString)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALerpVolumesSingleton::LerpVolumesSetWorldUnitDirectionDefault(UObject* WorldContextObject, FName VariableName, FVector VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldUnitDirectionDefault"));
    struct Params_LerpVolumesSetWorldUnitDirectionDefault {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FVector VariableValue; // 0x10
    }; // Size: 0x1c
    Params_LerpVolumesSetWorldUnitDirectionDefault params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FVector)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ALerpVolumesSingleton::LerpVolumesGetWorldScalar(UObject* WorldContextObject, FName VariableName, float& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldScalar"));
    struct Params_LerpVolumesGetWorldScalar {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        float VariableValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_LerpVolumesGetWorldScalar params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (float)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
void ALerpVolumesSingleton::LerpVolumesSetWorldTagDefaultName(UObject* WorldContextObject, FName VariableName, FName VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldTagDefaultName"));
    struct Params_LerpVolumesSetWorldTagDefaultName {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FName VariableValue; // 0x10
    }; // Size: 0x18
    Params_LerpVolumesSetWorldTagDefaultName params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FName)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALerpVolumesSingleton::LerpVolumesSetWorldScalarDefault(UObject* WorldContextObject, FName VariableName, float VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldScalarDefault"));
    struct Params_LerpVolumesSetWorldScalarDefault {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        float VariableValue; // 0x10
    }; // Size: 0x14
    Params_LerpVolumesSetWorldScalarDefault params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (float)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALerpVolumesSingleton::LerpVolumesSetWorldIntegerDefault(UObject* WorldContextObject, FName VariableName, int32_t VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldIntegerDefault"));
    struct Params_LerpVolumesSetWorldIntegerDefault {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        int32_t VariableValue; // 0x10
    }; // Size: 0x14
    Params_LerpVolumesSetWorldIntegerDefault params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (int32_t)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALerpVolumesSingleton::LerpVolumesIsWorldVector(UObject* WorldContextObject, FName VariableName, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldVector"));
    struct Params_LerpVolumesIsWorldVector {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_LerpVolumesIsWorldVector params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void ALerpVolumesSingleton::LerpVolumesIsWorldUnitDirection(UObject* WorldContextObject, FName VariableName, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldUnitDirection"));
    struct Params_LerpVolumesIsWorldUnitDirection {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_LerpVolumesIsWorldUnitDirection params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void ALerpVolumesSingleton::LerpVolumesIsWorldTag(UObject* WorldContextObject, FName VariableName, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldTag"));
    struct Params_LerpVolumesIsWorldTag {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_LerpVolumesIsWorldTag params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void ALerpVolumesSingleton::LerpVolumesIsWorldScalar(UObject* WorldContextObject, FName VariableName, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldScalar"));
    struct Params_LerpVolumesIsWorldScalar {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_LerpVolumesIsWorldScalar params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void ALerpVolumesSingleton::LerpVolumesIsWorldInteger(UObject* WorldContextObject, FName VariableName, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldInteger"));
    struct Params_LerpVolumesIsWorldInteger {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_LerpVolumesIsWorldInteger params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void ALerpVolumesSingleton::LerpVolumesIsWorldColor(UObject* WorldContextObject, FName VariableName, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldColor"));
    struct Params_LerpVolumesIsWorldColor {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_LerpVolumesIsWorldColor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
bool ALerpVolumesSingleton::LerpVolumesGetWorldVector(UObject* WorldContextObject, FName VariableName, FVector& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldVector"));
    struct Params_LerpVolumesGetWorldVector {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FVector VariableValue; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_LerpVolumesGetWorldVector params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FVector)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetWorldUnitDirection(UObject* WorldContextObject, FName VariableName, FVector& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldUnitDirection"));
    struct Params_LerpVolumesGetWorldUnitDirection {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FVector VariableValue; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_LerpVolumesGetWorldUnitDirection params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FVector)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetWorldTag(UObject* WorldContextObject, FName VariableName, FString& VariableValue, ELerpVolumesGetTagValueMode ValueMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldTag"));
    struct Params_LerpVolumesGetWorldTag {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FString VariableValue; // 0x10
        ELerpVolumesGetTagValueMode ValueMode; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_LerpVolumesGetWorldTag params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FString)VariableValue;
    params.ValueMode = (ELerpVolumesGetTagValueMode)ValueMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetWorldInteger(UObject* WorldContextObject, FName VariableName, int32_t& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldInteger"));
    struct Params_LerpVolumesGetWorldInteger {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        int32_t VariableValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_LerpVolumesGetWorldInteger params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (int32_t)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetWorldColor(UObject* WorldContextObject, FName VariableName, FLinearColor& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldColor"));
    struct Params_LerpVolumesGetWorldColor {
        UObject* WorldContextObject; // 0x0
        FName VariableName; // 0x8
        FLinearColor VariableValue; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_LerpVolumesGetWorldColor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FLinearColor)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetVectorAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, FVector& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetVectorAtPosition"));
    struct Params_LerpVolumesGetVectorAtPosition {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        FName VariableName; // 0x14
        FVector VariableValue; // 0x1c
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_LerpVolumesGetVectorAtPosition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FVector)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetUnitDirectionAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, FVector& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetUnitDirectionAtPosition"));
    struct Params_LerpVolumesGetUnitDirectionAtPosition {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        FName VariableName; // 0x14
        FVector VariableValue; // 0x1c
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_LerpVolumesGetUnitDirectionAtPosition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FVector)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetTagAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, FString& VariableValue, ELerpVolumesGetTagValueMode ValueMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetTagAtPosition"));
    struct Params_LerpVolumesGetTagAtPosition {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        FName VariableName; // 0x14
        char pad_1c[0x4];
        FString VariableValue; // 0x20
        ELerpVolumesGetTagValueMode ValueMode; // 0x30
        bool ReturnValue; // 0x31
    }; // Size: 0x32
    Params_LerpVolumesGetTagAtPosition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FString)VariableValue;
    params.ValueMode = (ELerpVolumesGetTagValueMode)ValueMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetScalarAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, float& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetScalarAtPosition"));
    struct Params_LerpVolumesGetScalarAtPosition {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        FName VariableName; // 0x14
        float VariableValue; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_LerpVolumesGetScalarAtPosition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (float)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetIntegerAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, int32_t& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetIntegerAtPosition"));
    struct Params_LerpVolumesGetIntegerAtPosition {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        FName VariableName; // 0x14
        int32_t VariableValue; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_LerpVolumesGetIntegerAtPosition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (int32_t)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ALerpVolumesSingleton::LerpVolumesGetColorAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, FLinearColor& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesSingleton.LerpVolumesGetColorAtPosition"));
    struct Params_LerpVolumesGetColorAtPosition {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        FName VariableName; // 0x14
        FLinearColor VariableValue; // 0x1c
        bool ReturnValue; // 0x2c
    }; // Size: 0x2d
    Params_LerpVolumesGetColorAtPosition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FLinearColor)VariableValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
