#include "AStreamingPlaceholderChildActorBase.hpp"
#include "ATransfigurationPlaceholderFrontend.hpp"
ATransfigurationPlaceholderFrontend* ATransfigurationPlaceholderFrontend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationPlaceholderFrontend");
    return (ATransfigurationPlaceholderFrontend*)res;
}
