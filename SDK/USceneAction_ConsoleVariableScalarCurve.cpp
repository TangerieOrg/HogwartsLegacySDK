#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_ConsoleBase.hpp"
#include "USceneAction_ConsoleVariableScalarCurve.hpp"
USceneAction_ConsoleVariableScalarCurve* USceneAction_ConsoleVariableScalarCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConsoleVariableScalarCurve");
    return (USceneAction_ConsoleVariableScalarCurve*)res;
}
