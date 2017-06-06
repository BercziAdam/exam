#include <stdio.h>

typedef enum pokemon_type {normal, fire, water, electric, grass, fighting, poison, gorund, flying, psychic, bug, rock, ghost, dragon, dark, steel, fairy}poketype_t;
typedef struct Pokemon {
    char name[256];
    int age;
    float strength;
    float speed;
    poketype_t type;
} pokemon_t;
/* Pokemon database!
 * You should store the following data in a structure
 *  - the name of the pokemon (which is shorter than 256 characters)
 *  - the age of the pokemon (in years)
 *  - the strength of the pokemon (between 0.0-10.0)
 *  - the speed of the pokemon (between 0.0-10.0)
 *  - the type of the pokemon (as a custom type, see below)
 *
 * You should store the pokemon type in an enumeration
 * the valid types are:
 *  - normal
 *  - fire
 *  - water
 *  - electric
 *  - grass
 *  - ice
 *  - fighting
 *  - poision
 *  - ground
 *  - flying
 *  - psychic
 *  - bug
 *  - rock
 *  - ghost
 *  - dragon
 *  - dark
 *  - steel
 *  - fairy
 *
 * The "pokemon"-s are stored in an array.
 *
 * Write the following functions:
 * 1) Get faster pokemons than
 *      - parameters:
 *          - array
 *          - array length
 *          - speed
 *      - it returns the count of the faster pokemons than the parameter "speed"
 * 2) Get type count
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the count of pokemons which are "type"
 * 3) Get strongest type
 *      - parameters:
 *          - array
 *          - array length
 *          - strength
 *      - it returns the type of the strongest pokemon
 * 4) Get maximal strength of a type
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the highest strength among the "type" type pokemons
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */
int Get_Faster_Pokemon_Than(pokemon_t *pokemon_array, int length, float speed) {

    int counter = 0;
    for(int i = 0;i < length; i++) {
        if(pokemon_array[i].speed > speed)
            counter++;
    }
    return counter;
}

int Get_Type_Count(pokemon_t *pokemon_array, int length, poketype_t pokemont_type)
{
    int counter = 0;
    for(int i = 0; i < length; i++) {
        if(pokemon_array[i].type == pokemont_type)
            counter++;
    }
    return counter;
}

poketype_t Get_Strongest_Type(pokemon_t *pokemon_array, int length)
{
    int i = 1;
    float max_strength = pokemon_array[0].strength;

    while(max_strength > pokemon_array[i].strength) {
        max_strength = pokemon_array[i].strength;
        i++;
        }
        printf("%d\n", i);
    return pokemon_array[i].type;
}
float Get_Maximal_Strength(pokemon_t * pokemon_array, int length, poketype_t type)
{
    for(int = 0; i < length; i++) {
        if(pokemon_array[i].type == type) {

        }

    }
    return
}
int main() {
    pokemon_t pokemon_array[] = {
        {"Pikachu", 2, 6.55, 7.56, electric},
        {"Charmander", 1, 7.45, 7.88, fire},
        {"Arbok", 5, 7.58, 8.88, poison},
        {"Furret", 6, 5.33, 6.75, normal},
        {"Charizard", 3, 9.55, 9.21, fire},
        };
    int length = sizeof(pokemon_array) / sizeof(pokemon_array[0]);

    float faster = 8.45;
    int counter_faster = Get_Faster_Pokemon_Than(pokemon_array, length, faster);
    printf("%d\n", counter_faster);

    poketype_t type = fire;
    int type_count = Get_Type_Count(pokemon_array, length, type);
    printf("%d\n", type_count);

    poketype_t strongest = Get_Strongest_Type(pokemon_array, length);
    printf("%d\n",strongest);

    float highest = Get_Maximal_Strength(pokemon_array, length, type);
    printf("%f", highest);

    return 0;
}
