/*
 * reader.h
 *
 *  Created on: 7 Feb 2020
 *      Author: PC
 */

#ifndef READER_H_
#define READER_H_

#define MAX_VERT 100000

struct Vertex {

    float x;
    float y;
    float z;

};


class Reader {
    private:
        Vertex vertex[256];

    public:
        Reader();
        ~Reader();

        void load(char* filename);
        void draw(char* filename);


};



#endif /* READER_H_ */
