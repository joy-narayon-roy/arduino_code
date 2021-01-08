char t;
char l;

void setup() {
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT)
    Serial.begin(9600);
}

void frontLight(s) {
    if(s) {
        digitalWrite(12, HIGH)
        frontLight(true)
    }else {
        digitalWrite(12, 0)
        frontLight(false)
    }
}
void frontLight(s) {
    if(s) {
        digitalWrite(12, HIGH)
        frontLight(true)
    }else {
        digitalWrite(12, 0)
        frontLight(false)
    }
}
void backLight(s) {
    if(s) {
        digitalWrite(13, HIGH)
        frontLight(true)
    }else {
        digitalWrite(13, 0)
        frontLight(false)
    }
}

void loop() {
    if(Serial.available()) {
        t = Serial.read();
        Serial.println(t);
    }

    if(t == "F") {
        digitalWrite(8, HIGH);
        digitalWrite(9, 0);
        digitalWrite(10, HIGH);
        digitalWrite(11, 0);
    }

    else if(t == "B") {
        digitalWrite(8, 0);
        digitalWrite(9, HIGH);
        digitalWrite(10, 0);
        digitalWrite(11, HIGH);
    }
    else if(t == "L") {
        digitalWrite(8, HIGH);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, HIGH);
    }
    else if(t == "R") {
        digitalWrite(8, 0);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, 0);
    }
    else if(t == "S") {
        digitalWrite(8, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    else if(t == "W" || t == "w") {
        if(t == "W") {
            frontLight(true)
        }else {
            frontLight(false)
        }
    }
    else if(t == "U" || t == 'u') {
        if(t == "U") {
            backLight(true)
        }
        if(t == "u") {
            backLight(false)
        }
    }
}