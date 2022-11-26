/**
 * @file cenvlib.h
 * @author Daniel McCoy Stephenson
 * @brief This header file provides base structures and function declarations for simulating virtual worlds.
 * @version 0.0.1
 * @date November 25th, 2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

struct Entity {
    int id;
    char* name;
    int environmentId;
    int gridId;
    char* locationId;
};

struct Location {
    char* id;
    int x;
    int y;
    struct Entity *entities;
};

struct Grid {
    int id;
    int size;
    struct Location **locations;
};

struct Environment {
    int id;
    char* name;
    struct Grid *grid;
};

int createEnvironment(int id, char* name);
int createGrid(int id, int size);
int createLocation(char* id, int x, int y);
int createEntity(int id, char* name, int environmentId, int gridId, char* locationId);
int placeEntityIntoEnvironment(struct Entity *entity, struct Environment *environment);
int placeEntityIntoEnvironmentAt(struct Entity *entity, struct Environment *environment, int x, int y);
