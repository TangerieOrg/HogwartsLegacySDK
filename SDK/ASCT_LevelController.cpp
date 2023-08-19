#include "AActor.hpp"
#include "ASCT_LevelController.hpp"
#include "USCT_StreamingEventWrapper.hpp"
#include "UWorld.hpp"
ASCT_LevelController* ASCT_LevelController::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamingComplexityToolRuntime.SCT_LevelController");
    return (ASCT_LevelController*)res;
}
