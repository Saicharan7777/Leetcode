/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let a=[];
    for(let i=0;i<arr.length;i+=size)
    {
        let v=arr.slice(i,i+size)
        a.push(v)
    }
    return a;
};
