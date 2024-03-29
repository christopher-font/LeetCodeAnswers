typedef struct {
    // User defined data may be declared here.
    pthread_mutex_t second;
    pthread_mutex_t third;
} Foo;

Foo* fooCreate() {
    Foo* obj = (Foo*) malloc(sizeof(Foo));
    
    // Initialize user defined data here.
    pthread_mutex_init(&obj->second, NULL);
    pthread_mutex_lock(&obj->second);
    pthread_mutex_init(&obj->third, NULL);
    pthread_mutex_lock(&obj->third);

    return obj;
}

void first(Foo* obj) {
    
    // printFirst() outputs "first". Do not change or remove this line.
    printFirst();
    pthread_mutex_unlock(&obj->second);
}

void second(Foo* obj) {
    pthread_mutex_lock(&obj->second);

    // printSecond() outputs "second". Do not change or remove this line.
    printSecond();
    pthread_mutex_unlock(&obj->third);

}

void third(Foo* obj) {
    pthread_mutex_lock(&obj->third);

    // printThird() outputs "third". Do not change or remove this line.
    printThird();
}

void fooFree(Foo* obj) {
    // User defined data may be cleaned up here.
    pthread_mutex_destroy(&obj->second);
    pthread_mutex_destroy(&obj->third);
}