#include "UHoudiniAssetInstanceInputField.hpp"
#include "UObject.hpp"
UHoudiniAssetInstanceInputField* UHoudiniAssetInstanceInputField::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInputField");
    return (UHoudiniAssetInstanceInputField*)res;
}
