#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneAction_VSyncEditor.hpp"
USceneAction_VSyncEditor* USceneAction_VSyncEditor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_VSyncEditor");
    return (USceneAction_VSyncEditor*)res;
}
