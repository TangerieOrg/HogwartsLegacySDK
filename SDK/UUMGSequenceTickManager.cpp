#include "UMovieSceneEntitySystemLinker.hpp"
#include "UObject.hpp"
#include "UUMGSequenceTickManager.hpp"
UUMGSequenceTickManager* UUMGSequenceTickManager::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.UMGSequenceTickManager");
    return (UUMGSequenceTickManager*)res;
}
