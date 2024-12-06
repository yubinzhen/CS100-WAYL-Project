#include "../../header/Pokemon/attack.h"
#include "../../header/Pokemon/pokemon.h"
#include "../../header/Pokemon/moves.h"
#include <iostream>

Attack::Attack() : name(moves::None), type(PokemonType::Normal), power(0) {} //default constructor
Attack::Attack(moves moveName){//constructor for every moves
    name = moveName;
    switch (moveName) {
        case moves::FireSpin:
            type = PokemonType::Fire;
            power = 35;
            break;
        case moves::Flamethrower:
            type = PokemonType::Fire;
            power = 90;
            break;
        case moves::FireBlast:
            type = PokemonType::Fire;
            power = 110;
            break;
        case moves::Ember:
            type = PokemonType::Fire;
            power = 40;
            break;
        case moves::FirePunch:
            type = PokemonType::Fire;
            power = 75;
            break;
        case moves::Absorb:
            type = PokemonType::Grass;
            power = 20;
            break;
        case moves::LeechSeed:
            type = PokemonType::Grass;
            power = 0; // Non-damaging
            break;
        case moves::MegaDrain:
            type = PokemonType::Grass;
            power = 40;
            break;
        case moves::PetalDance:
            type = PokemonType::Grass;
            power = 120;
            break;
        case moves::RazorLeaf:
            type = PokemonType::Grass;
            power = 55;
            break;
        case moves::SleepPowder:
            type = PokemonType::Grass;
            power = 0; // Non-damaging
            break;
        case moves::SolarBeam:
            type = PokemonType::Grass;
            power = 120;
            break;
        case moves::Spore:
            type = PokemonType::Grass;
            power = 0; // Non-damaging
            break;
        case moves::StunSpore:
            type = PokemonType::Grass;
            power = 0; // Non-damaging
            break;
        case moves::VineWhip:
            type = PokemonType::Grass;
            power = 45;
            break;
        case moves::Clamp:
            type = PokemonType::Water;
            power = 35;
            break;
        case moves::Crabhammer:
            type = PokemonType::Water;
            power = 100;
            break;
        case moves::HydroPump:
            type = PokemonType::Water;
            power = 110;
            break;
        case moves::Surf:
            type = PokemonType::Water;
            power = 90;
            break;
        case moves::WaterGun:
            type = PokemonType::Water;
            power = 40;
            break;
        case moves::Waterfall:
            type = PokemonType::Water;
            power = 80;
            break;
        case moves::Withdraw:
            type = PokemonType::Water;
            power = 0; // Non-damaging
            break;
        case moves::Barrage:
            type = PokemonType::Normal;
            power = 15;
            break;
        case moves::Bide:
            type = PokemonType::Normal;
            power = 0; // Depends on damage received
            break;
        case moves::Bind:
            type = PokemonType::Normal;
            power = 15;
            break;
        case moves::BodySlam:
            type = PokemonType::Normal;
            power = 85;
            break;
        case moves::CometPunch:
            type = PokemonType::Normal;
            power = 18;
            break;
        case moves::Cut:
            type = PokemonType::Normal;
            power = 50;
            break;
        case moves::DefenseCurl:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::DizzyPunch:
            type = PokemonType::Normal;
            power = 70;
            break;
        case moves::DoubleSlap:
            type = PokemonType::Normal;
            power = 15;
            break;
        case moves::DoubleEdge:
            type = PokemonType::Normal;
            power = 120;
            break;
        case moves::EggBomb:
            type = PokemonType::Normal;
            power = 100;
            break;
        case moves::Explosion:
            type = PokemonType::Normal;
            power = 250;
            break;
        case moves::FuryAttack:
            type = PokemonType::Normal;
            power = 15;
            break;
        case moves::FurySwipes:
            type = PokemonType::Normal;
            power = 18;
            break;
        case moves::Glare:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::Growl:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::Growth:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::Guillotine:
            type = PokemonType::Normal;
            power = 0; // OHKO move
            break;
        case moves::Harden:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::Headbutt:
            type = PokemonType::Normal;
            power = 70;
            break;
        case moves::HornAttack:
            type = PokemonType::Normal;
            power = 65;
            break;
        case moves::HornDrill:
            type = PokemonType::Normal;
            power = 0; // OHKO move
            break;
        case moves::HyperBeam:
            type = PokemonType::Normal;
            power = 150;
            break;
        case moves::HyperFang:
            type = PokemonType::Normal;
            power = 80;
            break;
        case moves::Leer:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::LovelyKiss:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::MegaKick:
            type = PokemonType::Normal;
            power = 120;
            break;
        case moves::MegaPunch:
            type = PokemonType::Normal;
            power = 80;
            break;
        case moves::Pound:
            type = PokemonType::Normal;
            power = 40;
            break;
        case moves::QuickAttack:
            type = PokemonType::Normal;
            power = 40;
            break;
        case moves::Rage:
            type = PokemonType::Normal;
            power = 20;
            break;
        case moves::RazorWind:
            type = PokemonType::Normal;
            power = 80;
            break;
        case moves::Recover:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::Scratch:
            type = PokemonType::Normal;
            power = 40;
            break;
        case moves::Screech:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::SelfDestruct:
            type = PokemonType::Normal;
            power = 200;
            break;
        case moves::Sharpen:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::Sing:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::SkullBash:
            type = PokemonType::Normal;
            power = 130;
            break;
        case moves::Slam:
            type = PokemonType::Normal;
            power = 80;
            break;
        case moves::Slash:
            type = PokemonType::Normal;
            power = 70;
            break;
        case moves::SoftBoiled:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::SonicBoom:
            type = PokemonType::Normal;
            power = 0; // Fixed damage (20 HP)
            break;
        case moves::SpikeCannon:
            type = PokemonType::Normal;
            power = 20;
            break;
        case moves::Splash:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::Stomp:
            type = PokemonType::Normal;
            power = 65;
            break;
        case moves::Strength:
            type = PokemonType::Normal;
            power = 80;
            break;
        case moves::SuperFang:
            type = PokemonType::Normal;
            power = 0; // Reduces HP by half
            break;
        case moves::Supersonic:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::SwordsDance:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::Tackle:
            type = PokemonType::Normal;
            power = 40;
            break;
        case moves::TailWhip:
            type = PokemonType::Normal;
            power = 0; // Non-damaging
            break;
        case moves::TakeDown:
            type = PokemonType::Normal;
            power = 90;
            break;
        case moves::Thrash:
            type = PokemonType::Normal;
            power = 120;
            break;
        case moves::ViseGrip:
            type = PokemonType::Normal;
            power = 55;
            break;
        case moves::Wrap:
            type = PokemonType::Normal;
            power = 15;
            break;
        default:
            type = PokemonType::Normal; // Default case for undefined moves
            power = 0;
            break;
    }
}



string Attack::getName(moves name) const {//use this function to get the name of the moves
if (name == moves::FireSpin) return "Fire Spin";
else if (name == moves::Flamethrower) return "Flamethrower";
else if (name == moves::FireBlast) return "Fire Blast";
else if (name == moves::Ember) return "Ember";
else if (name == moves::FirePunch) return "Fire Punch";
else if (name == moves::Absorb) return "Absorb";
else if (name == moves::LeechSeed) return "Leech Seed";
else if (name == moves::MegaDrain) return "Mega Drain";
else if (name == moves::PetalDance) return "Petal Dance";
else if (name == moves::RazorLeaf) return "Razor Leaf";
else if (name == moves::SleepPowder) return "Sleep Powder";
else if (name == moves::SolarBeam) return "Solar Beam";
else if (name == moves::Spore) return "Spore";
else if (name == moves::StunSpore) return "Stun Spore";
else if (name == moves::VineWhip) return "Vine Whip";
else if (name == moves::Clamp) return "Clamp";
else if (name == moves::Crabhammer) return "Crabhammer";
else if (name == moves::HydroPump) return "Hydro Pump";
else if (name == moves::Surf) return "Surf";
else if (name == moves::WaterGun) return "Water Gun";
else if (name == moves::Waterfall) return "Waterfall";
else if (name == moves::Withdraw) return "Withdraw";
else if (name == moves::Barrage) return "Barrage";
else if (name == moves::Bide) return "Bide";
else if (name == moves::Bind) return "Bind";
else if (name == moves::BodySlam) return "Body Slam";
else if (name == moves::CometPunch) return "Comet Punch";
else if (name == moves::Cut) return "Cut";
else if (name == moves::DefenseCurl) return "Defense Curl";
else if (name == moves::DizzyPunch) return "Dizzy Punch";
else if (name == moves::DoubleSlap) return "Double Slap";
else if (name == moves::DoubleEdge) return "Double-Edge";
else if (name == moves::EggBomb) return "Egg Bomb";
else if (name == moves::Explosion) return "Explosion";
else if (name == moves::FuryAttack) return "Fury Attack";
else if (name == moves::FurySwipes) return "Fury Swipes";
else if (name == moves::Glare) return "Glare";
else if (name == moves::Growl) return "Growl";
else if (name == moves::Growth) return "Growth";
else if (name == moves::Guillotine) return "Guillotine";
else if (name == moves::Harden) return "Harden";
else if (name == moves::Headbutt) return "Headbutt";
else if (name == moves::HornAttack) return "Horn Attack";
else if (name == moves::HornDrill) return "Horn Drill";
else if (name == moves::HyperBeam) return "Hyper Beam";
else if (name == moves::HyperFang) return "Hyper Fang";
else if (name == moves::Leer) return "Leer";
else if (name == moves::LovelyKiss) return "Lovely Kiss";
else if (name == moves::MegaKick) return "Mega Kick";
else if (name == moves::MegaPunch) return "Mega Punch";
else if (name == moves::Pound) return "Pound";
else if (name == moves::QuickAttack) return "Quick Attack";
else if (name == moves::Rage) return "Rage";
else if (name == moves::RazorWind) return "Razor Wind";
else if (name == moves::Recover) return "Recover";
else if (name == moves::Scratch) return "Scratch";
else if (name == moves::Screech) return "Screech";
else if (name == moves::SelfDestruct) return "Self-Destruct";
else if (name == moves::Sharpen) return "Sharpen";
else if (name == moves::Sing) return "Sing";
else if (name == moves::SkullBash) return "Skull Bash";
else if (name == moves::Slam) return "Slam";
else if (name == moves::Slash) return "Slash";
else if (name == moves::SoftBoiled) return "Soft-Boiled";
else if (name == moves::SonicBoom) return "Sonic Boom";
else if (name == moves::SpikeCannon) return "Spike Cannon";
else if (name == moves::Splash) return "Splash";
else if (name == moves::Stomp) return "Stomp";
else if (name == moves::Strength) return "Strength";
else if (name == moves::SuperFang) return "Super Fang";
else if (name == moves::Supersonic) return "Supersonic";
else if (name == moves::SwordsDance) return "Swords Dance";
else if (name == moves::Tackle) return "Tackle";
else if (name == moves::TailWhip) return "Tail Whip";
else if (name == moves::TakeDown) return "Take Down";
else if (name == moves::Thrash) return "Thrash";
else if (name == moves::ViseGrip) return "Vise Grip";
else if (name == moves::Wrap) return "Wrap";
else return "Unknown Move";
}

int Attack::getpower() const {
    return power;
}

int Attack::calculateDamage(Pokemon attacker, Pokemon defender) const{//this is the actual damage that will do to the opponent
    int damage = ((2*attacker.getLevel()/5+2)*(power*attacker.calculateAttack()/defender.calculateDefense())/50+2);
    if(attacker.isTypeEffective(defender)){
        damage*=2;
    }
    else if(attacker.isTypeNotEffective(defender)){
        damage*=0.5;
    }
    srand(time(0));
    if(rand()%10000<=625){
        damage*=1.5;
    }
    return damage*(85+rand()%30)/100;
}

void Attack::displayInfo() const {//display the information for the move
        cout << "Move Name: " << getName(getMoves())
                  << "\nPower: " << getpower() << "\n";
}

moves Attack::getMoves() const{
    return name;
}