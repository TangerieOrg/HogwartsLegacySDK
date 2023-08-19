#include "AStreamingPlaceholderChildActorBase.hpp"
#include "AStreamingPlaceholderUnlocked.hpp"
#include "FStreamingPlaceholderLockState.hpp"
AStreamingPlaceholderUnlocked* AStreamingPlaceholderUnlocked::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPlaceholderUnlocked");
    return (AStreamingPlaceholderUnlocked*)res;
}
