/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include <utility>
#include "task_1.cpp"
#include "task_2.cpp"
#include "task_3.cpp"
#include "task_4.cpp"
#include "task_5.cpp"
#include "task_6.cpp"
#include "task_7.cpp"
#include "task_8.cpp"

int main() {
    Problem1 p1;
    std::vector<int> numsProb1 = {1, 1, 1, 1, 1};
    int targetProb1 = 3;
    std::cout << "Number of ways: " << p1.findTargetSumWays(numsProb1, targetProb1) << std::endl;


    Problem2 p2;
    std::vector<int> numsProb21 = {1, 5, 11, 5};
    std::cout << "Can partition: " << std::boolalpha << p2.canPartition(numsProb21) << std::endl;

    std::vector<int> numsProb22 = {1, 2, 3, 5};
    std::cout << "Can partition: " << std::boolalpha << p2.canPartition(numsProb22) << std::endl;


    Problem3 p3;
    std::vector<std::string> wordDict1 = {"new", "uzbekistan"};
    std::string sProb31 = "newuzbekistan";
    std::cout << "Can segment: " << std::boolalpha << p3.wordBreak(sProb31, wordDict1) << std::endl;

    std::vector<std::string> wordDict2 = {"apple", "pen"};
    std::string sProb32 = "applepenapple";
    std::cout << "Can segment: " << std::boolalpha << p3.wordBreak(sProb32, wordDict2) << std::endl;

    std::vector<std::string> wordDict3 = {"cats", "dog", "sand", "and", "cat"};
    std::string sProb33 = "catsandog";
    std::cout << "Can segment: " << std::boolalpha << p3.wordBreak(sProb33, wordDict3) << std::endl;


    Problem4 p4;
    int aProb41 = 2;
    std::vector<int> bProb41 = {3};
    std::cout << "Super power: " << p4.superPow(aProb41, bProb41) << std::endl;

    int aProb42 = 2;
    std::vector<int> bProb42 = {1, 0};
    std::cout << "Super power: " << p4.superPow(aProb42, bProb42) << std::endl;

    int aProb43 = 1;
    std::vector<int> bProb43 = {4, 3, 3, 8, 5, 2};
    std::cout << "Super power: " << p4.superPow(aProb43, bProb43) << std::endl;



    Problem5 p5;
    std::string keyProb51 = "the quick brown fox jumps over the lazy dog";
    std::string messageProb51 = "vkbs bs t suepuv";
    std::cout << "Decoded message: " << p5.decodeMessage(keyProb51, messageProb51) << std::endl;

    std::string keyProb52 = "eljuxhpwnyrdgtqkviszcfmabo";
    std::string messageProb52 = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
    std::cout << "Decoded message: " << p5.decodeMessage(keyProb52, messageProb52) << std::endl;


    Problem6 p6;
    int nProb6 = 10;
    std::pair<int, int> primesProb6 = p6.generatePrimes(nProb6);
    std::cout << "First prime: " << primesProb6.first << ", Second prime: " << primesProb6.second << std::endl;


    Problem7 p7;
    int aProb7 = 13;
    int bProb7 = 17;
    std::cout << "Euler's totient function: " << p7.eulerFunction(aProb7, bProb7) << std::endl;

    aProb7 = 19;
    bProb7 = 43;
    std::cout << "Euler's totient function: " << p7.eulerFunction(aProb7, bProb7) << std::endl;

    aProb7 = 71;
    bProb7 = 2;
    std::cout << "Euler's totient function: " << p7.eulerFunction(aProb7, bProb7) << std::endl;


    Problem8 p8;
    int p = 61;
    int q = 53;
    auto ed = p8.generateED(p, q);
    std::cout << "e: " << ed.first << ", d: " << ed.second << std::endl;
    return 0;
}
