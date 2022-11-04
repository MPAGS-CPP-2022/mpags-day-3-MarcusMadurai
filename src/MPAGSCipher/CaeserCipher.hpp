#ifndef MPAGSCIPHER_CAESERCIPHER_HPP
#define MPAGSCIPHER_CAESERCIPHER_HPP

#include <string>
#include <vector>

#include "CipherMode.hpp"

class CaeserCipher {
    public:
        //constructor for if they key is of type size_t
        explicit CaeserCipher(std::size_t key);
        //std::size_t key_;

        //if we pass the constructor a string, then we'll use a different constructor (the above constructor would turn it into a size_t automagically)
        explicit CaeserCipher(std::string key);
    
        //member that will apply the cipher
        std::string applyCipher(const std::string inputText, const CipherMode cipherMode);

    private:
        std::size_t key_;  
    
};

#endif    // MPAGSCIPHER_CAESERCIPHER_HPP