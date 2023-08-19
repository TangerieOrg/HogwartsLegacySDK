#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneAction_TestCameraCut.hpp"
USceneAction_TestCameraCut* USceneAction_TestCameraCut::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_TestCameraCut");
    return (USceneAction_TestCameraCut*)res;
}
