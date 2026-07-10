/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

 class Counter
 {
    constructor(value)
    {
        this.value = value;
        this.count = value;
    }

    increment()
    {
        this.count += 1;
        return this.count;
    }

    decrement()
    {
        this.count -= 1;
        return this.count;
    }

    reset()
    {
        this.count = this.value;
        return this.count;
    }
 }
var createCounter = function(init) {
    return new Counter(init);
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */