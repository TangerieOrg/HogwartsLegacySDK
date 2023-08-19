#include "FCharacterSaveGameInfo.hpp"
#include "FSaveDirectoryEntry.hpp"
#include "UPersistentGameData.hpp"
#include "USaveGame.hpp"
UPersistentGameData* UPersistentGameData::StaticClass() {
    static auto res = find_uobject("Class /Script/PersistentData.PersistentGameData");
    return (UPersistentGameData*)res;
}
