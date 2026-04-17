#ifndef INVENTORY_SYSTEM_H
#define INVENTORY_SYSTEM_H

#include <vector>
#include <string>

class Item
{
private:
    std::string id;
    std::string name;
    int quantity;

public:
    std::string getId() const;
    std::string getName() const;
    int getQuantity() const;
    void setQuantity(int quantity);
};

class Inventory
{
private:
    std::vector<Item> items;
    int capacity;

public:
    Inventory(int capacity);

    bool addItem(const Item& item);
    bool removeItem(const std::string& itemId);
    Item getItem(const std::string& itemId);
};

class Player
{
private:
    Inventory inventory;

public:
    Player(int inventoryCapacity);

    void pickItem(const Item& item);
};

#endif // INVENTORY_SYSTEM_H