#include "USceneActionState_ConsoleVariableScalarCurve.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_ConsoleVariableScalarCurve* USceneActionState_ConsoleVariableScalarCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ConsoleVariableScalarCurve");
    return (USceneActionState_ConsoleVariableScalarCurve*)res;
}
