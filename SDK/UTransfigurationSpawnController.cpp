#include "UClass.hpp"
#include "UTickableWorldSubsystem.hpp"
#include "UTransfigurationSpawnController.hpp"
UTransfigurationSpawnController* UTransfigurationSpawnController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationSpawnController");
    return (UTransfigurationSpawnController*)res;
}
