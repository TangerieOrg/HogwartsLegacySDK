#include "USceneAction_ConsoleCommandBase.hpp"
#include "USceneAction_ConsoleCommandInShippingToo.hpp"
USceneAction_ConsoleCommandInShippingToo* USceneAction_ConsoleCommandInShippingToo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConsoleCommandInShippingToo");
    return (USceneAction_ConsoleCommandInShippingToo*)res;
}
