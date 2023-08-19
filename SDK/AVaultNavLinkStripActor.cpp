#include "ALinkStripActor.hpp"
#include "AVaultNavLinkStripActor.hpp"
AVaultNavLinkStripActor* AVaultNavLinkStripActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VaultNavLinkStripActor");
    return (AVaultNavLinkStripActor*)res;
}
