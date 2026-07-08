class MyHashSet {
    constructor() {
        this.keys = []
    }

    add(key) {
        this.key = key
    }

    remove(key) {
        delete this.key
    }

    contains(key) {
        if (this.key == key) return true
        else return false
    }
}
/**
 * Your MyHashSet object will be instantiated and called as such:
 * var obj = new MyHashSet()
 * obj.add(key)
 * obj.remove(key)
 * var param_3 = obj.contains(key)
 */