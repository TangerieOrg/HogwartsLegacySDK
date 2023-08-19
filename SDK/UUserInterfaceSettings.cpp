#include "ERenderFocusRule.hpp"
#include "EUIScalingRule.hpp"
#include "FIntPoint.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FSoftClassPath.hpp"
#include "UClass.hpp"
#include "UDPICustomScalingRule.hpp"
#include "UDeveloperSettings.hpp"
#include "UObject.hpp"
#include "UUserInterfaceSettings.hpp"
UUserInterfaceSettings* UUserInterfaceSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.UserInterfaceSettings");
    return (UUserInterfaceSettings*)res;
}
