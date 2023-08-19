#include "AMapPlayerController.hpp"
#include "APlayerController.hpp"
#include "AUMGInputManager.hpp"
AMapPlayerController* AMapPlayerController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapPlayerController");
    return (AMapPlayerController*)res;
}
